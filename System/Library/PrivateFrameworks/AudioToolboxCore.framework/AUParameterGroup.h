/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:23 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AudioToolboxCore/AudioToolboxCore-Structs.h>
#import <AudioToolboxCore/AUParameterNode.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSMutableDictionary;

@interface AUParameterGroup : AUParameterNode <NSSecureCoding> {

	NSArray* _children;
	NSMutableDictionary* _childIndicesByIdentifier;

}

@property (nonatomic,retain) NSMutableDictionary * childIndicesByIdentifier;              //@synthesize childIndicesByIdentifier=_childIndicesByIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * children;                                        //@synthesize children=_children - In the implementation block
@property (nonatomic,readonly) NSArray * allParameters; 
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)children;
-(id)valueForKey:(id)arg1 ;
-(NSArray *)allParameters;
-(BOOL)isGroup;
-(id)copyNodeWithOffset:(unsigned long long)arg1 ;
-(void)_observersChanged:(BOOL)arg1 deltaCount:(int)arg2 ;
-(void)_serialize:(CASerializer*)arg1 ;
-(void)_deserialize:(CADeserializer*)arg1 fromSetFullState:(BOOL)arg2 ;
-(id)initWithChildren:(id)arg1 ;
-(id)initWithID:(id)arg1 name:(id)arg2 children:(id)arg3 ;
-(void)_indexChildren;
-(id)initWithTemplate:(id)arg1 identifier:(id)arg2 name:(id)arg3 addressOffset:(unsigned long long)arg4 ;
-(NSMutableDictionary *)childIndicesByIdentifier;
-(void)setChildIndicesByIdentifier:(NSMutableDictionary *)arg1 ;
@end
