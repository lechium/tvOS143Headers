/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:24 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Vision/Vision-Structs.h>
#import <Vision/VNObservation.h>

@class NSString;

@interface VNPixelBufferObservation : VNObservation {

	CVBufferRef _pixelBuffer;
	NSString* _featureName;

}

@property (nonatomic,readonly) CVBufferRef pixelBuffer;                  //@synthesize pixelBuffer=_pixelBuffer - In the implementation block
@property (nonatomic,copy,readonly) NSString * featureName;              //@synthesize featureName=_featureName - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CVBufferRef)pixelBuffer;
-(NSString *)featureName;
-(id)initWithRequestRevision:(unsigned long long)arg1 featureName:(id)arg2 CVPixelBuffer:(CVBufferRef)arg3 ;
@end

