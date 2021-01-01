/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:36 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CPMS.framework/CPMS
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CPMS/CPMS-Structs.h>
@interface CPMSStateReader : NSObject
+(id)log;
+(id)timescaleDisplayName:(char)arg1 ;
+(id)copyCPMSControlStateSnapshots;
+(id)copyCPMSPmaxState:(int*)arg1 ;
+(id)getCPMSControlStateSnapshotDictionary:(CPMSPPMControlStateSnapshot*)arg1 ;
+(id)getPowerBudgetDictionary:(CPMSPPMPowerBudget*)arg1 ;
@end
