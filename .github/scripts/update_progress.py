from pathlib import Path
from datetime import datetime
import subprocess
import re

START_DATE = datetime(2026, 7, 30).date()

log = subprocess.check_output(
    ["git", "log", "--format=%ad", "--date=short", "--name-only"],
    text=True
)

days = {}
current_date = None

for line in log.splitlines():
    line = line.strip()

    if re.fullmatch(r"\d{4}-\d{2}-\d{2}", line):
        current_date = datetime.strptime(line, "%Y-%m-%d").date()

    elif line and current_date and current_date >= START_DATE:
        parts = Path(line).parts

        if len(parts) < 2:
            continue

        folder = parts[0]

        if not re.match(r"^\d+-", folder):
            continue

        days.setdefault(current_date, set()).add(folder)

dates = sorted(days)

output = ["# 📅 LeetCode Daily Progress", ""]

for index, date in enumerate(dates, start=1):
    output.append(f"## Day {index} — {date.strftime('%d %B %Y')}")
    output.append("")

    for folder in sorted(days[date]):
        name = folder.split("-", 1)[1].replace("-", " ").title()
        output.append(f"- [x] [{folder}]({folder}) — {name}")

    output.append("")

Path("DAILY_PROGRESS.md").write_text(
    "\n".join(output),
    encoding="utf-8"
)
