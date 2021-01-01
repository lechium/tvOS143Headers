/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:12 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol UIFocusEnvironment;
@class NSString;

@interface _UIFocusGroup : NSObject {

	_UIFocusGroup* _parentGroup;
	id<UIFocusEnvironment> _rootEnvironment;
	NSString* _identifier;

}

@property (getter=_identifier,nonatomic,readonly) NSString * identifier;                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) _UIFocusGroup * parentGroup; 
@property (nonatomic,__weak,readonly) id<UIFocusEnvironment> rootEnvironment;              //@synthesize rootEnvironment=_rootEnvironment - In the implementation block
+(id)nullGroup;
+(id)invalidGroup;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)_identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(_UIFocusGroup *)parentGroup;
-(BOOL)isEqualToFocusGroup:(id)arg1 ;
-(id)_commonAncestorWithGroup:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 rootEnvironment:(id)arg2 ;
-(id)childGroupWithIdentifier:(id)arg1 ;
-(id)childGroupWithIdentifier:(id)arg1 rootEnvironment:(id)arg2 ;
-(id<UIFocusEnvironment>)rootEnvironment;
@end

