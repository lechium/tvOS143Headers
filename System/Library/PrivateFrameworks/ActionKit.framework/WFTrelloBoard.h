/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:05 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ActionKit/WFTrelloObject.h>

@class NSString, NSURL;

@interface WFTrelloBoard : WFTrelloObject {

	BOOL _closed;
	NSString* _itemDescription;
	NSURL* _URL;

}

@property (nonatomic,readonly) NSString * itemDescription;              //@synthesize itemDescription=_itemDescription - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                             //@synthesize URL=_URL - In the implementation block
@property (nonatomic,readonly) BOOL closed;                             //@synthesize closed=_closed - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)JSONKeyPathsByPropertyKey;
+(id)closedJSONTransformer;
-(NSURL *)URL;
-(BOOL)closed;
-(NSString *)itemDescription;
@end

