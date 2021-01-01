/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:22 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/AMSUIWebActionRunnable.h>

@class AMSUIWebClientContext, NSString;

@interface AMSUIWebLogAction : NSObject <AMSUIWebActionRunnable> {

	AMSUIWebClientContext* _context;
	long long _level;
	NSString* _message;

}

@property (nonatomic,retain) AMSUIWebClientContext * context;              //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) long long level;                              //@synthesize level=_level - In the implementation block
@property (nonatomic,retain) NSString * message;                           //@synthesize message=_message - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)level;
-(AMSUIWebClientContext *)context;
-(void)setContext:(AMSUIWebClientContext *)arg1 ;
-(void)setLevel:(long long)arg1 ;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(id)initWithJSObject:(id)arg1 context:(id)arg2 ;
-(id)runAction;
-(unsigned char)_logTypeFromLevel:(long long)arg1 ;
@end

