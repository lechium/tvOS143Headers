/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:18 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TextInputCore/TIMetricDescriptor.h>

@class NSString;

@interface TIContextValueDescriptor : TIMetricDescriptor {

	NSString* _contextFieldName;

}

@property (retain) NSString * contextFieldName;              //@synthesize contextFieldName=_contextFieldName - In the implementation block
+(id)contextValueDescriptorWithMetricName:(id)arg1 contextFieldName:(id)arg2 ;
-(id)initWithMetricName:(id)arg1 contextFieldName:(id)arg2 ;
-(NSString *)contextFieldName;
-(void)setContextFieldName:(NSString *)arg1 ;
@end

