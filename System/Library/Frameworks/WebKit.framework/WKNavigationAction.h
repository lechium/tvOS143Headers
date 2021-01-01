/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:26 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class NSURL, _WKUserInitiatedAction, WKNavigation, WKFrameInfo, NSURLRequest, NSString;

@interface WKNavigationAction : NSObject <WKObject> {

	ObjectStorage<API::NavigationAction> _navigationAction;

}

@property (nonatomic,readonly) NSURL * _originalURL; 
@property (getter=_isUserInitiated,nonatomic,readonly) BOOL _userInitiated; 
@property (nonatomic,readonly) BOOL _canHandleRequest; 
@property (nonatomic,readonly) BOOL _shouldOpenExternalSchemes; 
@property (nonatomic,readonly) BOOL _shouldOpenAppLinks; 
@property (nonatomic,readonly) BOOL _shouldPerformDownload; 
@property (nonatomic,readonly) BOOL _shouldOpenExternalURLs; 
@property (nonatomic,readonly) _WKUserInitiatedAction * _userInitiatedAction; 
@property (nonatomic,readonly) long long _syntheticClickType; 
@property (nonatomic,readonly) CGPoint _clickLocationInRootViewCoordinates; 
@property (nonatomic,readonly) long long modifierFlags; 
@property (nonatomic,readonly) BOOL _isRedirect; 
@property (nonatomic,readonly) WKNavigation * _mainFrameNavigation; 
@property (nonatomic,copy,readonly) WKFrameInfo * sourceFrame; 
@property (nonatomic,copy,readonly) WKFrameInfo * targetFrame; 
@property (nonatomic,readonly) long long navigationType; 
@property (nonatomic,copy,readonly) NSURLRequest * request; 
@property (readonly) Object* _apiObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(void)dealloc;
-(NSURLRequest *)request;
-(long long)modifierFlags;
-(BOOL)_isUserInitiated;
-(long long)navigationType;
-(NSURL *)_originalURL;
-(Object*)_apiObject;
-(WKNavigation *)_mainFrameNavigation;
-(long long)_syntheticClickType;
-(CGPoint)_clickLocationInRootViewCoordinates;
-(WKFrameInfo *)sourceFrame;
-(WKFrameInfo *)targetFrame;
-(BOOL)_shouldOpenExternalSchemes;
-(BOOL)_canHandleRequest;
-(BOOL)_shouldOpenAppLinks;
-(BOOL)_shouldPerformDownload;
-(BOOL)_shouldOpenExternalURLs;
-(_WKUserInitiatedAction *)_userInitiatedAction;
-(BOOL)_isRedirect;
@end

