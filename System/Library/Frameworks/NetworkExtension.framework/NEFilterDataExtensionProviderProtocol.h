/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:14 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol NEFilterDataExtensionProviderProtocol <NEFilterExtensionProviderProtocol>
@required
-(void)provideRemediationMap:(id)arg1;
-(void)provideURLAppendStringMap:(id)arg1;
-(void)fetchProviderConnectionWithCompletionHandler:(/*^block*/id)arg1;
-(void)providerControlSocketFileHandle:(id)arg1;
-(void)handleRulesChanged;
-(void)report:(id)arg1;

@end

