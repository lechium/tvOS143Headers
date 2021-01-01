/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:27 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WebKit/WebKit-Structs.h>
#import <WebKit/WKFrameInfo.h>
#import <libobjc.A.dylib/WKObject.h>

@class NSArray, NSString;

@interface _WKFrameTreeNode : WKFrameInfo <WKObject> {

	ObjectStorage<API::FrameTreeNode> _node;

}

@property (nonatomic,readonly) NSArray * childFrames; 
@property (readonly) Object* _apiObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)request;
-(id)_handle;
-(id)webView;
-(NSArray *)childFrames;
-(Object*)_apiObject;
-(BOOL)isMainFrame;
-(id)securityOrigin;
-(id)_parentFrameHandle;
@end

