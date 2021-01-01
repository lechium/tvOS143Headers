/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:05 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSCharacterSet, NSString, NSMutableDictionary;

@interface PBTextReader : NSObject {

	NSCharacterSet* _whitespaceAndNewlineCharacterSet;
	NSCharacterSet* _tagNameCharacterSet;
	NSCharacterSet* _nonHexDigitCharacterSet;
	unsigned long long _pos;
	unsigned long long _length;
	NSString* _string;
	NSMutableDictionary* _objects;
	NSMutableDictionary* _cachedObjectTypes;

}
-(id)init;
-(void)dealloc;
-(id)readMessageType:(Class)arg1 fromString:(id)arg2 ;
@end

