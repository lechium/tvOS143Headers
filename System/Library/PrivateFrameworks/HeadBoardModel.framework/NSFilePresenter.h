/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:58 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HeadBoardModel.framework/HeadBoardModel
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSURL, NSOperationQueue, NSSet;


@protocol NSFilePresenter <NSObject>
@property (copy,readonly) NSURL * presentedItemURL; 
@property (retain,readonly) NSOperationQueue * presentedItemOperationQueue; 
@property (copy,readonly) NSURL * primaryPresentedItemURL; 
@property (readonly) NSSet * observedPresentedItemUbiquityAttributes; 
@optional
-(void)relinquishPresentedItemToReader:(/*^block*/id)arg1;
-(void)relinquishPresentedItemToWriter:(/*^block*/id)arg1;
-(void)savePresentedItemChangesWithCompletionHandler:(/*^block*/id)arg1;
-(void)accommodatePresentedItemDeletionWithCompletionHandler:(/*^block*/id)arg1;
-(void)presentedItemDidMoveToURL:(id)arg1;
-(void)presentedItemDidChange;
-(void)presentedItemDidChangeUbiquityAttributes:(id)arg1;
-(void)presentedItemDidGainVersion:(id)arg1;
-(void)presentedItemDidLoseVersion:(id)arg1;
-(void)presentedItemDidResolveConflictVersion:(id)arg1;
-(void)accommodatePresentedSubitemDeletionAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)presentedSubitemDidAppearAtURL:(id)arg1;
-(void)presentedSubitemAtURL:(id)arg1 didMoveToURL:(id)arg2;
-(void)presentedSubitemDidChangeAtURL:(id)arg1;
-(void)presentedSubitemAtURL:(id)arg1 didGainVersion:(id)arg2;
-(void)presentedSubitemAtURL:(id)arg1 didLoseVersion:(id)arg2;
-(void)presentedSubitemAtURL:(id)arg1 didResolveConflictVersion:(id)arg2;
-(NSURL *)primaryPresentedItemURL;
-(NSSet *)observedPresentedItemUbiquityAttributes;

@required
-(NSURL *)presentedItemURL;
-(NSOperationQueue *)presentedItemOperationQueue;

@end

