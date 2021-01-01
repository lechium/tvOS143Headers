/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:32 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSExtensionRequestHandling.h>
#import <libobjc.A.dylib/INIntentHandlerProviding.h>

@class INExtensionContext, NSString;

@interface INExtension : NSObject <NSExtensionRequestHandling, INIntentHandlerProviding> {

	INExtensionContext* _extensionContext;

}

@property (nonatomic,readonly) INExtensionContext * _extensionContext;              //@synthesize extensionContext=_extensionContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(INExtensionContext *)_extensionContext;
-(void)beginRequestWithExtensionContext:(id)arg1 ;
-(id)handlerForIntent:(id)arg1 ;
@end

