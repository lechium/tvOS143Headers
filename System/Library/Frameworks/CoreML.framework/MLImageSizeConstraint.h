/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:12 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreML/CoreML-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSOrderedSet, NSArray;

@interface MLImageSizeConstraint : NSObject <NSSecureCoding> {

	long long _type;
	NSOrderedSet* _imageSizeSet;
	NSRange _pixelsWideRange;
	NSRange _pixelsHighRange;

}

@property (nonatomic,readonly) NSOrderedSet * imageSizeSet;                 //@synthesize imageSizeSet=_imageSizeSet - In the implementation block
@property (nonatomic,readonly) long long type;                              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSRange pixelsWideRange;                     //@synthesize pixelsWideRange=_pixelsWideRange - In the implementation block
@property (nonatomic,readonly) NSRange pixelsHighRange;                     //@synthesize pixelsHighRange=_pixelsHighRange - In the implementation block
@property (nonatomic,readonly) NSArray * enumeratedImageSizes; 
+(BOOL)supportsSecureCoding;
+(unsigned long long)locationClosestTo:(unsigned long long)arg1 inRange:(NSRange)arg2 ;
+(id)closestImageSizeInArray:(id)arg1 toImageSize:(id)arg2 preferDownScaling:(BOOL)arg3 ;
+(id)closestImageSizeInPixelsWideRange:(NSRange)arg1 pixelsHighRange:(NSRange)arg2 toImageSize:(id)arg3 preferInputAspectRatio:(BOOL)arg4 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)type;
-(NSArray *)enumeratedImageSizes;
-(id)initUnspecified;
-(id)initWithPixelsWideRange:(NSRange)arg1 pixelsHighRange:(NSRange)arg2 ;
-(id)initWithEnumeratedImageSizes:(id)arg1 ;
-(BOOL)isAllowedImageSize:(id)arg1 error:(id*)arg2 ;
-(NSRange)pixelsWideRange;
-(NSRange)pixelsHighRange;
-(NSOrderedSet *)imageSizeSet;
-(id)allowedImageSizeClosestToPixelsWide:(long long)arg1 pixelsHigh:(long long)arg2 preferDownScaling:(BOOL)arg3 preferInputAspectRatio:(BOOL)arg4 ;
@end

