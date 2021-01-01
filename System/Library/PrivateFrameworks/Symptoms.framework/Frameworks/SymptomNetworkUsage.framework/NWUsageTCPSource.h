/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:59 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomNetworkUsage.framework/SymptomNetworkUsage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SymptomNetworkUsage/SymptomNetworkUsage-Structs.h>
#import <SymptomNetworkUsage/NWUsageSource.h>

@class NSDictionary;

@interface NWUsageTCPSource : NWUsageSource {

	updater_nstat_msg_src_update_tcp _nstatTCPUpdate;
	NSDictionary* _lookupResults;

}
-(id)createSnapshot:(int)arg1 ;
-(BOOL)updateWithUpdate:(nstat_msg_src_update_convenient*)arg1 monitor:(id)arg2 ;
-(id)initWithUpdate:(nstat_msg_src_update_convenient*)arg1 monitor:(id)arg2 ;
-(void)deriveAttribution:(id)arg1 ;
@end
