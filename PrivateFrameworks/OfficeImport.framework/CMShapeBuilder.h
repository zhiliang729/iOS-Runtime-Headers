/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADOrientedBounds, NSDictionary;



@interface CMShapeBuilder : NSObject 
{
    NSInteger _type;
    OADOrientedBounds *_orientedBounds;
    NSInteger _format;
    NSDictionary *_adjustValues;
}

+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })canonicalBounds;

- (float)maxAdjustedValue;
- (void)setOrientedBounds:(id)arg1;
- (void)setFileFormat:(NSInteger)arg1;
- (struct CGPath { }*)createShapeWithTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (void)setShapeType:(NSInteger)arg1;
- (void)setAdjustValues:(id)arg1;
- (BOOL)isOffice12;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })affineTransform;
- (void)dealloc;

@end