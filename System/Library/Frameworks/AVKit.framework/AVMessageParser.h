/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:17 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSData;

@interface AVMessageParser : NSObject {

	NSString* _lineSeparator;
	NSString* _headerBodySeparator;
	NSString* _bodyLengthKey;
	NSString* _compressionMethodKey;
	NSData* _lineSeparatorData;
	NSData* _headerBodySeparatorData;

}

@property (nonatomic,copy) NSString * lineSeparator;                        //@synthesize lineSeparator=_lineSeparator - In the implementation block
@property (nonatomic,copy) NSString * headerBodySeparator;                  //@synthesize headerBodySeparator=_headerBodySeparator - In the implementation block
@property (nonatomic,copy) NSString * bodyLengthKey;                        //@synthesize bodyLengthKey=_bodyLengthKey - In the implementation block
@property (nonatomic,copy) NSString * compressionMethodKey;                 //@synthesize compressionMethodKey=_compressionMethodKey - In the implementation block
@property (nonatomic,retain) NSData * lineSeparatorData;                    //@synthesize lineSeparatorData=_lineSeparatorData - In the implementation block
@property (nonatomic,retain) NSData * headerBodySeparatorData;              //@synthesize headerBodySeparatorData=_headerBodySeparatorData - In the implementation block
+(id)airMessageParser;
-(id)init;
-(id)initWithLineSeparator:(id)arg1 headerBodySeparator:(id)arg2 bodyLengthKey:(id)arg3 compressionMethodKey:(id)arg4 ;
-(void)setLineSeparator:(NSString *)arg1 ;
-(void)setHeaderBodySeparator:(NSString *)arg1 ;
-(id)partsWithData:(id)arg1 ;
-(NSString *)lineSeparator;
-(NSString *)headerBodySeparator;
-(NSString *)bodyLengthKey;
-(void)setBodyLengthKey:(NSString *)arg1 ;
-(NSString *)compressionMethodKey;
-(void)setCompressionMethodKey:(NSString *)arg1 ;
-(NSData *)lineSeparatorData;
-(void)setLineSeparatorData:(NSData *)arg1 ;
-(NSData *)headerBodySeparatorData;
-(void)setHeaderBodySeparatorData:(NSData *)arg1 ;
@end

