/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:33 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SoundAnalysis/SoundAnalysis-Structs.h>
#import <libobjc.A.dylib/SNAnalyzerCreating.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/SNRequest.h>

@class NSArray, NSString;

@interface SNEstimateDirectionOfArrivalRequest : NSObject <SNAnalyzerCreating, NSCopying, NSSecureCoding, SNRequest> {

	NSArray* _spatialSpectrum;

}

@property (nonatomic,readonly) NSArray * spatialSpectrum;              //@synthesize spatialSpectrum=_spatialSpectrum - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqualToEstimateDirectionOfArrivalRequest:(id)arg1 ;
-(id)createAnalyzerWithError:(id*)arg1 ;
-(NSArray *)spatialSpectrum;
@end

