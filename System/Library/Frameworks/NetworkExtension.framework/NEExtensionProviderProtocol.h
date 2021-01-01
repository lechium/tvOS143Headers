/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:13 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol NEExtensionProviderProtocol <NSObject>
@required
-(void)wake;
-(void)sleepWithCompletionHandler:(/*^block*/id)arg1;
-(void)startWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)stopWithReason:(int)arg1;
-(void)createWithCompletionHandler:(/*^block*/id)arg1;
-(void)dispose;
-(void)setConfiguration:(id)arg1 extensionIdentifier:(id)arg2;
-(void)validateWithCompletionHandler:(/*^block*/id)arg1;

@end

