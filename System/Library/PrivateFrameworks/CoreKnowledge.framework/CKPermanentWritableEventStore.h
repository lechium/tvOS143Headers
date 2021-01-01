/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:21 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CKPermanentWritableEventStore
@required
-(BOOL)deleteInteractionsWithBundleId:(id)arg1 error:(id*)arg2;
-(void)deleteInteractionsWithBundleId:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)recordEvent:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(BOOL)recordInteraction:(id)arg1 bundleId:(id)arg2 error:(id*)arg3;
-(void)recordInteraction:(id)arg1 bundleId:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(BOOL)recordEvent:(id)arg1 error:(id*)arg2;
-(BOOL)recordInteraction:(id)arg1 error:(id*)arg2;
-(void)recordInteraction:(id)arg1 completionHandler:(/*^block*/id)arg2;

@end
