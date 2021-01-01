/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:57 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSNumber, NSMutableArray;

@interface IDSQRParticipantStreams : NSObject {

	NSNumber* _participantID;
	NSMutableArray* _streamArray;
	BOOL _anyParticipant;
	BOOL _anyStream;

}

@property (readonly) NSNumber * participantID;                   //@synthesize participantID=_participantID - In the implementation block
@property (readonly) NSMutableArray * streamArray;               //@synthesize streamArray=_streamArray - In the implementation block
@property (nonatomic,readonly) BOOL anyParticipant;              //@synthesize anyParticipant=_anyParticipant - In the implementation block
@property (nonatomic,readonly) BOOL anyStream;                   //@synthesize anyStream=_anyStream - In the implementation block
+(id)streamWithParticipantID:(id)arg1 streamArray:(id)arg2 anyParticipant:(BOOL)arg3 anyStream:(BOOL)arg4 ;
-(id)description;
-(NSNumber *)participantID;
-(id)initWithParticipantID:(id)arg1 streamArray:(id)arg2 anyParticipant:(BOOL)arg3 anyStream:(BOOL)arg4 ;
-(NSMutableArray *)streamArray;
-(BOOL)anyParticipant;
-(BOOL)anyStream;
@end

