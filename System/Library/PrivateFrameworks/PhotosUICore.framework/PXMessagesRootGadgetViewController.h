/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:58 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXGadgetUIViewController.h>

@class PXMessagesGadgetDataSourceManager;

@interface PXMessagesRootGadgetViewController : PXGadgetUIViewController {

	PXMessagesGadgetDataSourceManager* _messagesDataSourceManager;

}

@property (assign,nonatomic) double recentPhotosHeight; 
@property (nonatomic,readonly) PXMessagesGadgetDataSourceManager * messagesDataSourceManager;              //@synthesize messagesDataSourceManager=_messagesDataSourceManager - In the implementation block
+(Class)gadgetSpecClass;
-(void)viewDidLoad;
-(void)setRecentPhotosHeight:(double)arg1 ;
-(double)recentPhotosHeight;
-(id)initWithGadgetDataSourceManager:(id)arg1 ;
-(void)prepareForPresentationStyle:(long long)arg1 ;
-(PXMessagesGadgetDataSourceManager *)messagesDataSourceManager;
@end
