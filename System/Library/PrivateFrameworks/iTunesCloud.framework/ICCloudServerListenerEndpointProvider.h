/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:48 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/ICCloudServerListenerEndpointProviding.h>

@class NSXPCConnection, NSString;

@interface ICCloudServerListenerEndpointProvider : NSObject <ICCloudServerListenerEndpointProviding> {

	NSXPCConnection* _listenerEndpointProviderConnection;
	os_unfair_lock_s _lock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)listenerEndpointForService:(long long)arg1 error:(id*)arg2 ;
-(id)_listenerEndpointProviderConnection;
@end

