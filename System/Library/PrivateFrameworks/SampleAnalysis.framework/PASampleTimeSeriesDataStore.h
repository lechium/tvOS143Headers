/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:50 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class SASampleStore;

@interface PASampleTimeSeriesDataStore : NSObject <NSSecureCoding> {

	SASampleStore* _sampleStore;

}

@property (retain) SASampleStore * sampleStore;              //@synthesize sampleStore=_sampleStore - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithSampleStore:(id)arg1 ;
-(SASampleStore *)sampleStore;
-(void)setSampleStore:(SASampleStore *)arg1 ;
@end

