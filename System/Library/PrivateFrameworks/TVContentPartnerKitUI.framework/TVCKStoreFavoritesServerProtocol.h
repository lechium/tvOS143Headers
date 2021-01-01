/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:21 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol TVCKStoreFavoritesServerProtocol <NSObject>
@required
-(void)fetchStatusOfItemInContentCategory:(unsigned long long)arg1 withAdamID:(id)arg2 replyHandler:(/*^block*/id)arg3;
-(void)fetchCountOfItemsInCategory:(unsigned long long)arg1 withReplyHandler:(/*^block*/id)arg2;
-(void)fetchItemsInCategory:(unsigned long long)arg1 withReplyHandler:(/*^block*/id)arg2;
-(void)fetchInfoForShowsWithAdamIDs:(id)arg1 withReplyHandler:(/*^block*/id)arg2;
-(void)endMonitoringForChanges;
-(void)beginMonitoringForChanges;
-(void)moveItemInCategory:(unsigned long long)arg1 fromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
-(void)addItemWithAdamID:(id)arg1;
-(void)removeItemWithAdamID:(id)arg1;
-(void)removeAllItemsInCategory:(unsigned long long)arg1;
-(void)fetchLightWeightItemsInCategory:(unsigned long long)arg1 withReplyHandler:(/*^block*/id)arg2;

@end
