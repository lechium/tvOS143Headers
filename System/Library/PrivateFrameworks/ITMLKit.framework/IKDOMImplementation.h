/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:53 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/IKJSDOMImplementation.h>
#import <libobjc.A.dylib/IKJSDOMImplementationLS.h>

@interface IKDOMImplementation : IKJSObject <IKJSDOMImplementation, IKJSDOMImplementationLS>

@property (getter=synchronousMode,readonly) long long MODE_SYNCHRONOUS; 
@property (getter=asynchronousMode,readonly) long long MODE_ASYNCHRONOUS; 
-(long long)synchronousMode;
-(id)createDocument:(id)arg1 :(id)arg2 ;
-(id)createLSParser:(long long)arg1 :(id)arg2 ;
-(id)createLSSerializer;
-(id)createLSInput;
-(long long)asynchronousMode;
@end

