/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:13 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSArray, NSXPCInterface;


@protocol NEAgentSessionDelegate <NSObject>
@property (nonatomic,readonly) NSArray * uuids; 
@property (nonatomic,readonly) NSXPCInterface * driverInterface; 
@property (nonatomic,readonly) NSXPCInterface * managerInterface; 
@optional
-(id)initWithPluginType:(id)arg1 pluginClass:(long long)arg2 pluginEndpoint:(id)arg3 pluginUUID:(id)arg4 queue:(id)arg5 factory:(id)arg6;

@required
-(id)initWithPluginType:(id)arg1 pluginClass:(long long)arg2 pluginInfo:(id)arg3 queue:(id)arg4 factory:(id)arg5;
-(void)handleInitWithCompletionHandler:(/*^block*/id)arg1;
-(void)handleDisposeWithCompletionHandler:(/*^block*/id)arg1;
-(void)handleCancel;
-(void)handleAppsUninstalled:(id)arg1;
-(void)handleAppsUpdateBegins:(id)arg1;
-(void)handleAppsUpdateEnding:(id)arg1;
-(void)handleAppsUpdateEnds:(id)arg1;
-(NSArray *)uuids;
-(NSXPCInterface *)driverInterface;
-(NSXPCInterface *)managerInterface;

@end

