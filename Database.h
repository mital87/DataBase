/********************************************************************************\
 *
 * File Name       Database.h
 * Author          $Author:: Mital Solanki      $: Author of last commit
 * Version         $Revision:: 01               $: Revision of last commit
 * Modified        $Date:: 2014-07-07 16:02:00  $: Date of last commit
 *
 \********************************************************************************/

#import <UIKit/UIKit.h>
#import <sqlite3.h>

@interface Database : NSObject {

	sqlite3 *databaseObj;

}
+(Database*) shareDatabase;

-(BOOL) createEditableCopyOfDatabaseIfNeeded;
-(NSString *) GetDatabasePath:(NSString *)dbName;

-(void)CreateTable:(NSString *)query;
-(NSMutableArray *)SelectAllFromTable:(NSString *)query;
-(int)getCount:(NSString *)query;
-(BOOL)CheckForRecord:(NSString *)query;
-(void)Insert:(NSString *)query;
-(void)Delete:(NSString *)query;
-(void)Update:(NSString *)query;
-(void)Alter:(NSString *)query;
-(void)DropTable:(NSString *)query;
-(BOOL)CheckColumnExists:(NSString *)query;
-(int)GetSum:(NSString*)query;
@end
