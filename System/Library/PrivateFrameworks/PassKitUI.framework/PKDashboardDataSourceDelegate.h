/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:28 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PKDashboardDataSourceDelegate <NSObject>
@required
-(void)updateContent;
-(void)performBatchUpdates:(/*^block*/id)arg1 completion:(/*^block*/id)arg2;
-(void)reloadSections:(id)arg1;
-(void)insertSections:(id)arg1;
-(void)deleteSections:(id)arg1;
-(void)contentIsLoaded;
-(void)itemChanged:(id)arg1 atIndexPath:(id)arg2;

@end
