/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:51 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, RWIProtocolNetworkResponse;

@interface RWIProtocolNetworkCachedResource : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * url; 
@property (assign,nonatomic) long long type; 
@property (assign,nonatomic) double bodySize; 
@property (nonatomic,retain) RWIProtocolNetworkResponse * response; 
@property (nonatomic,copy) NSString * sourceMapURL; 
-(void)setType:(long long)arg1 ;
-(long long)type;
-(void)setResponse:(RWIProtocolNetworkResponse *)arg1 ;
-(RWIProtocolNetworkResponse *)response;
-(void)setUrl:(NSString *)arg1 ;
-(NSString *)url;
-(void)setBodySize:(double)arg1 ;
-(id)initWithUrl:(id)arg1 type:(long long)arg2 bodySize:(double)arg3 ;
-(double)bodySize;
-(void)setSourceMapURL:(NSString *)arg1 ;
-(NSString *)sourceMapURL;
@end

