/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:33 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class DOMNode;

@interface UIThreadSafeNode : NSObject {

	DOMNode* _node;

}
+(id)threadSafeNodeWithNode:(id)arg1 ;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(id)description;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)initWithNode:(id)arg1 ;
-(id)_realNode;
@end

