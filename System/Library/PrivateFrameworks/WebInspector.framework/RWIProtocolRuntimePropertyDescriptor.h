/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:51 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, RWIProtocolRuntimeRemoteObject;

@interface RWIProtocolRuntimePropertyDescriptor : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,retain) RWIProtocolRuntimeRemoteObject * value; 
@property (assign,nonatomic) BOOL writable; 
@property (nonatomic,retain) RWIProtocolRuntimeRemoteObject * get; 
@property (nonatomic,retain) RWIProtocolRuntimeRemoteObject * set; 
@property (assign,nonatomic) BOOL wasThrown; 
@property (assign,nonatomic) BOOL configurable; 
@property (assign,nonatomic) BOOL enumerable; 
@property (assign,nonatomic) BOOL isOwn; 
@property (nonatomic,retain) RWIProtocolRuntimeRemoteObject * symbol; 
@property (assign,nonatomic) BOOL nativeGetter; 
-(NSString *)name;
-(RWIProtocolRuntimeRemoteObject *)set;
-(void)setSet:(RWIProtocolRuntimeRemoteObject *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)initWithName:(id)arg1 ;
-(RWIProtocolRuntimeRemoteObject *)value;
-(void)setValue:(RWIProtocolRuntimeRemoteObject *)arg1 ;
-(RWIProtocolRuntimeRemoteObject *)symbol;
-(BOOL)writable;
-(void)setConfigurable:(BOOL)arg1 ;
-(RWIProtocolRuntimeRemoteObject *)get;
-(void)setSymbol:(RWIProtocolRuntimeRemoteObject *)arg1 ;
-(void)setWritable:(BOOL)arg1 ;
-(void)setGet:(RWIProtocolRuntimeRemoteObject *)arg1 ;
-(void)setWasThrown:(BOOL)arg1 ;
-(BOOL)wasThrown;
-(BOOL)configurable;
-(void)setEnumerable:(BOOL)arg1 ;
-(BOOL)enumerable;
-(void)setIsOwn:(BOOL)arg1 ;
-(BOOL)isOwn;
-(void)setNativeGetter:(BOOL)arg1 ;
-(BOOL)nativeGetter;
@end

