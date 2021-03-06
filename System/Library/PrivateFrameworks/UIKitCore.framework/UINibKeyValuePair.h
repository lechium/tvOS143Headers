/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:05 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface UINibKeyValuePair : NSObject {

	id object;
	NSString* keyPath;
	id value;

}

@property (nonatomic,readonly) id object; 
@property (nonatomic,copy,readonly) NSString * keyPath; 
@property (nonatomic,readonly) id value; 
-(id)object;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)value;
-(NSString *)keyPath;
-(void)apply;
-(void)applyForSimulator;
-(id)initWithObject:(id)arg1 keyPath:(id)arg2 value:(id)arg3 ;
@end

