/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:28 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/AAUIServerHook.h>

@protocol AAUIServerHookDelegate;
@class AAUIServerHookResponse, RUIObjectModel, NSString;

@interface AAUIDeviceToDeviceEncryptionHook : NSObject <AAUIServerHook> {

	id<AAUIServerHookDelegate> delegate;
	NSString* _altDSID;
	NSString* _context;

}

@property (nonatomic,retain) NSString * altDSID;                                       //@synthesize altDSID=_altDSID - In the implementation block
@property (nonatomic,retain) NSString * context;                                       //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) AAUIServerHookResponse * serverHookResponse; 
@property (nonatomic,retain) RUIObjectModel * objectModel; 
@property (assign,nonatomic,__weak) id<AAUIServerHookDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<AAUIServerHookDelegate>)delegate;
-(void)setDelegate:(id<AAUIServerHookDelegate>)arg1 ;
-(NSString *)context;
-(void)setContext:(NSString *)arg1 ;
-(NSString *)altDSID;
-(void)setAltDSID:(NSString *)arg1 ;
-(void)_performHSAUpgradeWithAttributes:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)shouldMatchElement:(id)arg1 ;
-(BOOL)shouldMatchModel:(id)arg1 ;
-(void)processElement:(id)arg1 attributes:(id)arg2 objectModel:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)processObjectModel:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithAltDSID:(id)arg1 upgradeContext:(id)arg2 ;
@end

