/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:49 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <SampleAnalysis/SampleAnalysis-Structs.h>
@class SAFanSpeed, SATimestamp;

@interface SAAuxiliaryData : NSObject {

	SAFanSpeed* _fanSpeed;
	/*function pointer*/void** _mountStatus;
	SATimestamp* _timestamp;

}
+(id)auxiliaryDataForTimestamp:(id)arg1 ;
-(void)dealloc;
@end

