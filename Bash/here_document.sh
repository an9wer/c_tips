# If the redirection operator is <<-, then all leading tab characters are
# stripped from input lines and the line containing delimiter.  This allows
# here-documents within shell scripts to be indented in a natural fashion.

cat <<EOF
	Here the leading tab will not be stripped.
EOF

cat <<-EOF
	Here the leading tab will be stripped.
	EOF
