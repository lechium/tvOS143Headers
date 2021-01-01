/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:29 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class NSString;

@interface WKWebProcessPlugInScriptWorld : NSObject <WKObject> {

	ObjectStorage<WebKit::InjectedBundleScriptWorld> _world;

}

@property (readonly) InjectedBundleScriptWorld* _scriptWorld; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (readonly) Object* _apiObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)world;
+(id)normalWorld;
-(NSString *)name;
-(void)dealloc;
-(Object*)_apiObject;
-(InjectedBundleScriptWorld*)_scriptWorld;
-(void)clearWrappers;
-(void)makeAllShadowRootsOpen;
-(void)disableOverrideBuiltinsBehavior;
@end

