function blog-header() {
  if [ "$1" == "-h" ] || [ "$1" == "--help" ]; then
    echo "Usage: ${FUNCNAME[0]} [CTF Name] [Category Name] [Challenge Name]"
    return
  fi

  echo "---"
  echo "title: $3"
  echo "date: $(date -I)"
  echo "categories: [Capture The Flags, $1]"
  echo "tags: [ctf, ${1,,}, ${2,,}, writeups]"
  echo "description: $1 $3 Challenge"
  echo "---"
}
