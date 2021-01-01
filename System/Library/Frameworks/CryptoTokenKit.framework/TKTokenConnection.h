/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:20 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class TKToken, NSXPCListener, NSMapTable, NSString;

@interface TKTokenConnection : NSObject <NSXPCListenerDelegate> {

	TKToken* _token;
	NSXPCListener* _listener;
	NSMapTable* _sessions;
	id _initialKeepAlive;

}

@property (nonatomic,readonly) TKToken * token;                       //@synthesize token=_token - In the implementation block
@property (nonatomic,readonly) NSXPCListener * listener;              //@synthesize listener=_listener - In the implementation block
@property (nonatomic,readonly) NSMapTable * sessions;                 //@synthesize sessions=_sessions - In the implementation block
@property (nonatomic,retain) id initialKeepAlive;                     //@synthesize initialKeepAlive=_initialKeepAlive - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)invalidate;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(TKToken *)token;
-(NSXPCListener *)listener;
-(id)initWithToken:(id)arg1 ;
-(NSMapTable *)sessions;
-(void)setInitialKeepAlive:(id)arg1 ;
-(id)initialKeepAlive;
@end

