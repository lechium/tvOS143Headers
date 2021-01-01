/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:06:47 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol NSFileProviderXPCInterface <NSFileCoordinationDebugInfoXPCInterface>
@required
-(void)checkInProviderWithReply:(/*^block*/id)arg1;
-(void)provideItemAtURL:(id)arg1 forClaimWithID:(id)arg2 madeByClientWithProcessIdentifier:(int)arg3 options:(unsigned long long)arg4 kernelOperation:(unsigned)arg5 completionHandler:(/*^block*/id)arg6;
-(oneway void)cancelProvidingItemAtURL:(id)arg1 forClaimWithID:(id)arg2;
-(void)providePhysicalItemForURL:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(oneway void)observePresentationChangeOfKind:(id)arg1 forPresenterWithID:(id)arg2 fromProcessWithIdentifier:(int)arg3 observedUbiquityAttributes:(id)arg4 url:(id)arg5 newURL:(id)arg6;
-(oneway void)observeEndOfWriteAtURL:(id)arg1 forClaimWithID:(id)arg2 fromProcessWithIdentifier:(int)arg3;
-(void)movingItemAtURL:(id)arg1 requiresProvidingWithDestinationURL:(id)arg2 completionHandler:(/*^block*/id)arg3;

@end
