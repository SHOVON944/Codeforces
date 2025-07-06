from PyPDF2 import PdfMerger

merger = PdfMerger()
merger.append("a.pdf")
merger.append("b.pdf")
merger.write("merged.pdf")
merger.close()
