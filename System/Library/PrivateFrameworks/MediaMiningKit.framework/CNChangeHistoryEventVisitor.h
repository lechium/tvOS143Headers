/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:14 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CNChangeHistoryEventVisitor <NSObject>
@optional
-(void)visitAddGroupEvent:(id)arg1;
-(void)visitUpdateGroupEvent:(id)arg1;
-(void)visitDeleteGroupEvent:(id)arg1;
-(void)visitAddMemberToGroupEvent:(id)arg1;
-(void)visitRemoveMemberFromGroupEvent:(id)arg1;
-(void)visitAddSubgroupToGroupEvent:(id)arg1;
-(void)visitRemoveSubgroupFromGroupEvent:(id)arg1;

@required
-(void)visitDropEverythingEvent:(id)arg1;
-(void)visitAddContactEvent:(id)arg1;
-(void)visitUpdateContactEvent:(id)arg1;
-(void)visitDeleteContactEvent:(id)arg1;

@end

