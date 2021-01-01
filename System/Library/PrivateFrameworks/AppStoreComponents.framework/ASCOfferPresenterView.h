/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:13 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol ASCOfferPresenterView <NSObject>
@required
-(void)setOfferEnabled:(BOOL)arg1;
-(void)setOfferStatus:(id)arg1;
-(void)setOfferInteractive:(BOOL)arg1;
-(void)setOfferMetadata:(id)arg1;
-(void)setOfferTheme:(id)arg1;
-(void)endOfferModalState;
-(id)saveOfferState;
-(void)beginOfferModalStateWithCancelBlock:(/*^block*/id)arg1;

@end
