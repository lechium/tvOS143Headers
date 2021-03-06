/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:18 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVKit/AVMessageTransformerProtocol.h>

@class NSString;

@interface AVAirMessageResponse : NSObject <AVMessageTransformerProtocol> {

	long long _status;
	NSString* _localizedDescription;

}

@property (nonatomic,readonly) long long status;                             //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) NSString * localizedDescription;              //@synthesize localizedDescription=_localizedDescription - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)messageWithParts:(id)arg1 ;
+(id)messageWithVersion:(id)arg1 headers:(id)arg2 bodyData:(id)arg3 ;
+(id)responseWithParts:(id)arg1 ;
-(NSString *)description;
-(NSString *)localizedDescription;
-(id)bodyData;
-(long long)status;
-(id)messageDataRepresentation;
-(id)initWithStatus:(long long)arg1 localizedDescription:(id)arg2 ;
-(id)headersForContentLength:(long long)arg1 compression:(id)arg2 ;
@end

