/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:08 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/JXHTTPRequestBody.h>

@class NSMutableDictionary, NSString;

@interface JXHTTPFormEncodedBody : NSObject <JXHTTPRequestBody> {

	NSMutableDictionary* _dictionary;

}

@property (nonatomic,retain) NSMutableDictionary * dictionary;              //@synthesize dictionary=_dictionary - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)withDictionary:(id)arg1 ;
-(id)init;
-(void)setDictionary:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)dictionary;
-(id)initWithDictionary:(id)arg1 ;
-(id)requestData;
-(id)httpInputStream;
-(id)httpContentType;
-(long long)httpContentLength;
@end

