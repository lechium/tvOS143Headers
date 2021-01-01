/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:03 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSURL, NSDictionary, NSNumber;

@interface UNSAttachmentRecord : NSObject {

	BOOL _thumbnailHidden;
	BOOL _hiddenFromDefaultExpandedView;
	NSString* _identifier;
	NSURL* _URL;
	NSString* _type;
	NSDictionary* _thumbnailClippingRect;
	NSNumber* _thumbnailFrameNumber;
	NSDictionary* _thumbnailTimestamp;

}

@property (nonatomic,copy) NSString * identifier;                             //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSURL * URL;                                       //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy) NSString * type;                                   //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL thumbnailHidden;                            //@synthesize thumbnailHidden=_thumbnailHidden - In the implementation block
@property (nonatomic,copy) NSDictionary * thumbnailClippingRect;              //@synthesize thumbnailClippingRect=_thumbnailClippingRect - In the implementation block
@property (nonatomic,copy) NSNumber * thumbnailFrameNumber;                   //@synthesize thumbnailFrameNumber=_thumbnailFrameNumber - In the implementation block
@property (nonatomic,copy) NSDictionary * thumbnailTimestamp;                 //@synthesize thumbnailTimestamp=_thumbnailTimestamp - In the implementation block
@property (assign,nonatomic) BOOL hiddenFromDefaultExpandedView;              //@synthesize hiddenFromDefaultExpandedView=_hiddenFromDefaultExpandedView - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(NSString *)identifier;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(BOOL)thumbnailHidden;
-(BOOL)hiddenFromDefaultExpandedView;
-(void)setThumbnailHidden:(BOOL)arg1 ;
-(void)setHiddenFromDefaultExpandedView:(BOOL)arg1 ;
-(NSDictionary *)thumbnailClippingRect;
-(NSDictionary *)thumbnailTimestamp;
-(NSNumber *)thumbnailFrameNumber;
-(void)setThumbnailClippingRect:(NSDictionary *)arg1 ;
-(void)setThumbnailFrameNumber:(NSNumber *)arg1 ;
-(void)setThumbnailTimestamp:(NSDictionary *)arg1 ;
@end

