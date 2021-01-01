/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:46 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <LoggingSupport/OSLogMessagePlaceholder.h>

@class NSDictionary, _OSLogEventSerializationMetadata;

@interface OSLogDeserializedMessagePlaceholder : OSLogMessagePlaceholder {

	NSDictionary* _backingDict;
	_OSLogEventSerializationMetadata* _metadata;

}

@property (nonatomic,readonly) NSDictionary * backingDict;                               //@synthesize backingDict=_backingDict - In the implementation block
@property (nonatomic,readonly) _OSLogEventSerializationMetadata * metadata;              //@synthesize metadata=_metadata - In the implementation block
-(id)type;
-(_OSLogEventSerializationMetadata *)metadata;
-(int)width;
-(int)precision;
-(id)tokens;
-(id)rawString;
-(id)typeNamespace;
-(id)initWithDict:(id)arg1 metadata:(id)arg2 ;
-(NSDictionary *)backingDict;
@end

