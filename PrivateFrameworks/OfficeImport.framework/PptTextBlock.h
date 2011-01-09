/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableArray, NSMutableString;



@interface PptTextBlock : NSObject 
{

  /* Error parsing encoded ivar type info: ^{PptTextHeaderAtom=^^?S{EshHeader="m_lLength"i"m_ulOffset"I"m_nInstance"s"m_unType"S"m_bVersion"C}^^?iBi} */
    struct PptTextHeaderAtom { int (**x1)(); unsigned short x2; struct EshHeader { 
            NSInteger m_lLength; 
            NSUInteger m_ulOffset; 
            short m_nInstance; 
            unsigned short m_unType; 
            unsigned char m_bVersion; 
        } x3; int (**x4)(); NSInteger x5; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x6; NSInteger x7; } *mTextHeader;

    NSMutableString *mText;

  /* Error parsing encoded ivar type info: ^{PptStyleTextPropertyAtom=^^?S{EshHeader="m_lLength"i"m_ulOffset"I"m_nInstance"s"m_unType"S"m_bVersion"C}^^?iB{ChVector<PptParaRun*>="m_vector"^^{PptParaRun}"m_tmpVector"^^{PptParaRun}"m_count"I"m_size"I"m_blockSize"I}{ChVector<PptCharRun*>="m_vector"^^{PptCharRun}"m_tmpVector"^^{PptCharRun}"m_count"I"m_size"I"m_blockSize"I}I} */
    struct PptStyleTextPropertyAtom { int (**x1)(); unsigned short x2; struct EshHeader { 
            NSInteger m_lLength; 
            NSUInteger m_ulOffset; 
            short m_nInstance; 
            unsigned short m_unType; 
            unsigned char m_bVersion; 
        } x3; int (**x4)(); NSInteger x5; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x6; struct ChVector<PptParaRun*> { 
            struct PptParaRun {} **m_vector; 
            struct PptParaRun {} **m_tmpVector; 
            NSUInteger m_count; 
            NSUInteger m_size; 
            NSUInteger m_blockSize; 
        } x7; struct ChVector<PptCharRun*> { 
            struct PptCharRun {} **m_vector; 
            struct PptCharRun {} **m_tmpVector; 
            NSUInteger m_count; 
            NSUInteger m_size; 
            NSUInteger m_blockSize; 
        } x8; NSUInteger x9; } *mStyleText;

    NSMutableArray *mMetaCharacterFields;
    NSMutableArray *mBookmarks;
    NSMutableArray *mHyperlinks;

  /* Error parsing encoded ivar type info: ^{PptTextRulerAtom=^^?S{EshHeader="m_lLength"i"m_ulOffset"I"m_nInstance"s"m_unType"S"m_bVersion"C}^^?iB{ChVector<PptTab>="m_vector"^{PptTab}"m_tmpVector"^{PptTab}"m_count"I"m_size"I"m_blockSize"I}[5S][5S]iSs} */
    struct PptTextRulerAtom { int (**x1)(); unsigned short x2; struct EshHeader { 
            NSInteger m_lLength; 
            NSUInteger m_ulOffset; 
            short m_nInstance; 
            unsigned short m_unType; 
            unsigned char m_bVersion; 
        } x3; int (**x4)(); NSInteger x5; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x6; struct ChVector<PptTab> { 
            struct PptTab {} *m_vector; 
            struct PptTab {} *m_tmpVector; 
            NSUInteger m_count; 
            NSUInteger m_size; 
            NSUInteger m_blockSize; 
        } x7; unsigned short x8[5]; unsigned short x9[5]; NSInteger x10; unsigned short x11; short x12; } *mTextRuler;

}


- (void)writeTextBlock:(id)arg1;
- (unsigned long)textIndex;
- (id)bookmarks;
- (void)readString:(id)arg1;
- (void)readStyles:(id)arg1;
- (void)readMetaCharacterFieldsBookmarksAndHyperlinks:(id)arg1;
- (void)readTextBlock:(id)arg1;
- (struct PptTextRulerAtom { int (**x1)(); unsigned short x2; struct EshHeader { NSInteger x_3_1_1; NSUInteger x_3_1_2; short x_3_1_3; unsigned short x_3_1_4; unsigned char x_3_1_5; } x3; int (**x4)(); NSInteger x5; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x6; struct ChVector<PptTab> { struct PptTab {} *x_7_1_1; struct PptTab {} *x_7_1_2; NSUInteger x_7_1_3; NSUInteger x_7_1_4; NSUInteger x_7_1_5; } x7; unsigned short x8[5]; unsigned short x9[5]; NSInteger x10; unsigned short x11; short x12; }*)textRuler;
     /* Encoded args for previous method: ^{PptTextRulerAtom=^^?S{EshHeader=iIsSC}^^?iB{ChVector<PptTab>=^{PptTab}^{PptTab}III}[5S][5S]iSs}8@0:4 */

- (NSInteger)textType;
- (NSInteger)paragraphRunCount;
- (struct PptParaRun { NSInteger x1; short x2; struct PptParaProperty { struct $_720 { unsigned int x_1_2_1 : 1; unsigned int x_1_2_2 : 1; unsigned int x_1_2_3 : 1; unsigned int x_1_2_4 : 1; unsigned int x_1_2_5 : 1; unsigned int x_1_2_6 : 1; unsigned int x_1_2_7 : 1; unsigned int x_1_2_8 : 1; unsigned int x_1_2_9 : 1; unsigned int x_1_2_10 : 1; unsigned int x_1_2_11 : 1; unsigned int x_1_2_12 : 1; unsigned int x_1_2_13 : 1; unsigned int x_1_2_14 : 1; unsigned int x_1_2_15 : 1; unsigned int x_1_2_16 : 1; unsigned int x_1_2_17 : 1; unsigned int x_1_2_18 : 1; unsigned int x_1_2_19 : 1; unsigned int x_1_2_20 : 1; unsigned int x_1_2_21 : 1; } x_3_1_1; unsigned int x_3_1_2 : 1; unsigned int x_3_1_3 : 1; unsigned int x_3_1_4 : 1; unsigned int x_3_1_5 : 1; unsigned int x_3_1_6 : 1; unsigned int x_3_1_7 : 1; unsigned int x_3_1_8 : 1; unsigned int x_3_1_9 : 1; unsigned int x_3_1_10 : 4; unsigned int x_3_1_11 : 2; unsigned short x_3_1_12; unsigned short x_3_1_13; short x_3_1_14; struct PptColor { struct CsColour { unsigned short x_1_3_1; unsigned short x_1_3_2; unsigned short x_1_3_3; unsigned short x_1_3_4; } x_15_2_1; NSInteger x_15_2_2; } x_3_1_15; short x_3_1_16; short x_3_1_17; short x_3_1_18; short x_3_1_19; short x_3_1_20; short x_3_1_21; struct ChVector<PptTab> {} *x_3_1_22; } x3; }*)paragraphRunAtIndex:(NSInteger)arg1;
- (NSInteger)characterRunCount;
- (struct PptCharRun { NSInteger x1; struct PptCharProperty { struct $_721 { unsigned int x_1_2_1 : 1; unsigned int x_1_2_2 : 1; unsigned int x_1_2_3 : 1; unsigned int x_1_2_4 : 1; unsigned int x_1_2_5 : 1; unsigned int x_1_2_6 : 1; unsigned int x_1_2_7 : 1; unsigned int x_1_2_8 : 1; unsigned int x_1_2_9 : 1; unsigned int x_1_2_10 : 1; unsigned int x_1_2_11 : 1; unsigned int x_1_2_12 : 1; unsigned int x_1_2_13 : 1; unsigned int x_1_2_14 : 1; unsigned int x_1_2_15 : 1; unsigned int x_1_2_16 : 1; unsigned int x_1_2_17 : 1; unsigned int x_1_2_18 : 4; } x_2_1_1; unsigned int x_2_1_2 : 1; unsigned int x_2_1_3 : 1; unsigned int x_2_1_4 : 1; unsigned int x_2_1_5 : 1; unsigned int x_2_1_6 : 1; unsigned int x_2_1_7 : 1; unsigned int x_2_1_8 : 1; unsigned int x_2_1_9 : 1; unsigned int x_2_1_10 : 1; unsigned int x_2_1_11 : 1; unsigned int x_2_1_12 : 4; unsigned int x_2_1_13 : 1; unsigned short x_2_1_14; unsigned short x_2_1_15; unsigned short x_2_1_16; unsigned short x_2_1_17; unsigned short x_2_1_18; struct PptColor { struct CsColour { unsigned short x_1_3_1; unsigned short x_1_3_2; unsigned short x_1_3_3; unsigned short x_1_3_4; } x_19_2_1; NSInteger x_19_2_2; } x_2_1_19; short x_2_1_20; } x2; }*)characterRunAtIndex:(NSInteger)arg1;
- (id)metaCharacterFields;
- (id)hyperlinks;
- (id)init;
- (id)text;
- (void)dealloc;

@end