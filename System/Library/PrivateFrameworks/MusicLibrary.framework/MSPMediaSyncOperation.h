/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:38 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MIPAlbum, MIPArtist, MIPGenre, MIPMediaItem, MIPMultiverseIdentifier, MIPPlaylist, MIPSeries;

@interface MSPMediaSyncOperation : PBCodable <NSCopying> {

	MIPAlbum* _album;
	MIPArtist* _artist;
	MIPGenre* _genre;
	MIPMediaItem* _mediaItem;
	MIPMultiverseIdentifier* _multiverseId;
	int _operationType;
	MIPPlaylist* _playlist;
	MIPSeries* _series;
	SCD_Struct_MI3 _has;

}

@property (assign,nonatomic) BOOL hasOperationType; 
@property (assign,nonatomic) int operationType;                                   //@synthesize operationType=_operationType - In the implementation block
@property (nonatomic,readonly) BOOL hasMultiverseId; 
@property (nonatomic,retain) MIPMultiverseIdentifier * multiverseId;              //@synthesize multiverseId=_multiverseId - In the implementation block
@property (nonatomic,readonly) BOOL hasArtist; 
@property (nonatomic,retain) MIPArtist * artist;                                  //@synthesize artist=_artist - In the implementation block
@property (nonatomic,readonly) BOOL hasAlbum; 
@property (nonatomic,retain) MIPAlbum * album;                                    //@synthesize album=_album - In the implementation block
@property (nonatomic,readonly) BOOL hasGenre; 
@property (nonatomic,retain) MIPGenre * genre;                                    //@synthesize genre=_genre - In the implementation block
@property (nonatomic,readonly) BOOL hasSeries; 
@property (nonatomic,retain) MIPSeries * series;                                  //@synthesize series=_series - In the implementation block
@property (nonatomic,readonly) BOOL hasMediaItem; 
@property (nonatomic,retain) MIPMediaItem * mediaItem;                            //@synthesize mediaItem=_mediaItem - In the implementation block
@property (nonatomic,readonly) BOOL hasPlaylist; 
@property (nonatomic,retain) MIPPlaylist * playlist;                              //@synthesize playlist=_playlist - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setOperationType:(int)arg1 ;
-(void)setHasOperationType:(BOOL)arg1 ;
-(BOOL)hasOperationType;
-(int)operationType;
-(void)setAlbum:(MIPAlbum *)arg1 ;
-(MIPAlbum *)album;
-(void)setArtist:(MIPArtist *)arg1 ;
-(MIPArtist *)artist;
-(void)setGenre:(MIPGenre *)arg1 ;
-(MIPGenre *)genre;
-(BOOL)hasArtist;
-(BOOL)hasAlbum;
-(MIPMediaItem *)mediaItem;
-(void)setMediaItem:(MIPMediaItem *)arg1 ;
-(MIPPlaylist *)playlist;
-(void)setPlaylist:(MIPPlaylist *)arg1 ;
-(void)setSeries:(MIPSeries *)arg1 ;
-(BOOL)hasSeries;
-(MIPSeries *)series;
-(BOOL)hasGenre;
-(MIPMultiverseIdentifier *)multiverseId;
-(void)setMultiverseId:(MIPMultiverseIdentifier *)arg1 ;
-(id)operationTypeAsString:(int)arg1 ;
-(int)StringAsOperationType:(id)arg1 ;
-(BOOL)hasMultiverseId;
-(BOOL)hasMediaItem;
-(BOOL)hasPlaylist;
@end

