/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:55 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PXSearchRecipientControllerDelegate <NSObject>
@optional
-(void)searchRecipientController:(id)arg1 didSelectRecipient:(id)arg2;
-(void)searchRecipientController:(id)arg1 searchStateDidChange:(long long)arg2;
-(void)searchRecipientController:(id)arg1 numberOfSearchRecipientsDidChange:(unsigned long long)arg2;

@required
-(id)viewControllerForPresentingContactViewControllerBySearchRecipientController:(id)arg1;

@end
