#import <UIKit/UIKit.h>

@interface UnitConverterViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *tempText;
@property (weak, nonatomic) IBOutlet UILabel *resultLabel;
@property (weak, nonatomic) IBOutlet UITextField *distanceText; // New text field for miles
@property (weak, nonatomic) IBOutlet UILabel *distanceResultLabel; // New label for kilometers

- (IBAction)convertTemp:(id)sender;
- (IBAction)convertDistance:(id)sender; // New action for distance conversion

@end
