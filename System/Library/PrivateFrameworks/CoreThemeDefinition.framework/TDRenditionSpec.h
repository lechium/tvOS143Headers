/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:19 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreThemeDefinition/CoreThemeDefinition-Structs.h>
#import <CoreData/NSManagedObject.h>

@class NSDate, TDRenditionKeySpec, NSSet, TDElementProduction, TDRenditionType;

@interface TDRenditionSpec : NSManagedObject

@property (nonatomic,retain) NSDate * dateOfLastChange; 
@property (assign,nonatomic) int width; 
@property (assign,nonatomic) int height; 
@property (assign,nonatomic) BOOL opaque; 
@property (assign,nonatomic) BOOL monochrome; 
@property (assign,nonatomic) int packedPointX; 
@property (assign,nonatomic) int packedPointY; 
@property (assign,nonatomic) BOOL alphaCrop; 
@property (nonatomic,retain) TDRenditionKeySpec * keySpec; 
@property (nonatomic,retain) NSSet * packedRenditions; 
@property (nonatomic,retain) TDElementProduction * production; 
@property (nonatomic,retain) TDRenditionType * renditionType; 
@property (nonatomic,retain) TDRenditionSpec * parentRendition; 
@property (nonatomic,retain) NSSet * properties; 
@property (assign,nonatomic) CGPoint packedPoint; 
-(void)awakeFromInsert;
-(TDRenditionType *)renditionType;
-(id)propertiesAsDictionary;
-(id)createCSIRepresentationWithCompression:(BOOL)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3 ;
-(BOOL)updatePackingPropertiesWithDocument:(id)arg1 ;
-(BOOL)canBePackedWithDocument:(id)arg1 ;
-(void)resetToBaseKeySpec;
-(void)setRenditionType:(TDRenditionType *)arg1 ;
-(CGPoint)packedPoint;
-(void)drawPackableRenditionInContext:(CGContextRef)arg1 withDocument:(id)arg2 ;
-(void)setPackedPoint:(CGPoint)arg1 ;
@end

