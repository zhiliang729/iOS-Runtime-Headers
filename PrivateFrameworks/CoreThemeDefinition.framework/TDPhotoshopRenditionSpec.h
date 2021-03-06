/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

@interface TDPhotoshopRenditionSpec : TDRenditionSpec {
}

- (void)_logError:(id)arg1;
- (void)_logExtra:(id)arg1;
- (void)_logWarning:(id)arg1;
- (void)copyAttributesInto:(id)arg1;
- (id)copyDataFromAttributes;
- (id)createCSIRepresentationFromGradientPSDImage:(id)arg1 withCompression:(BOOL)arg2 colorSpaceID:(unsigned int)arg3;
- (id)createCSIRepresentationFromPSDImage:(id)arg1 withCompression:(BOOL)arg2 colorSpaceID:(unsigned int)arg3;
- (id)createCSIRepresentationFromPSDImage:(id)arg1 withCompression:(BOOL)arg2 edgeMetricsMask:(id)arg3 textMetricsMask:(id)arg4 colorSpaceID:(unsigned int)arg5;
- (id)createCSIRepresentationWithCompression:(BOOL)arg1 colorSpaceID:(unsigned int)arg2 document:(id)arg3;
- (id)debugDescription;
- (int)psdSliceNumberForRenditionRow:(int)arg1 sliceRow:(int)arg2 renditionColumn:(int)arg3 sliceColumn:(int)arg4 rowsPerRendition:(int)arg5 columnsPerRendition:(int)arg6 renditionColumnCount:(int)arg7;
- (void)setAttributesFromCopyData:(id)arg1;

@end
